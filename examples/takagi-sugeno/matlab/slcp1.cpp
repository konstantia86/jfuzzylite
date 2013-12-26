#include <fl/Headers.h>

int main(int argc, char** argv){
fl::Engine* engine = new fl::Engine;
engine->setName("slcp1");

fl::InputVariable* inputVariable1 = new fl::InputVariable;
inputVariable1->setEnabled(true);
inputVariable1->setName("in1");
inputVariable1->setRange(-0.30000000, 0.30000000);
engine->addInputVariable(inputVariable1);

fl::InputVariable* inputVariable2 = new fl::InputVariable;
inputVariable2->setEnabled(true);
inputVariable2->setName("in2");
inputVariable2->setRange(-1.00000000, 1.00000000);
engine->addInputVariable(inputVariable2);

fl::InputVariable* inputVariable3 = new fl::InputVariable;
inputVariable3->setEnabled(true);
inputVariable3->setName("in3");
inputVariable3->setRange(-3.00000000, 3.00000000);
engine->addInputVariable(inputVariable3);

fl::InputVariable* inputVariable4 = new fl::InputVariable;
inputVariable4->setEnabled(true);
inputVariable4->setName("in4");
inputVariable4->setRange(-3.00000000, 3.00000000);
engine->addInputVariable(inputVariable4);

fl::InputVariable* inputVariable5 = new fl::InputVariable;
inputVariable5->setEnabled(true);
inputVariable5->setName("in5");
inputVariable5->setRange(0.50000000, 1.50000000);
inputVariable5->addTerm(new fl::Gaussian("small", 0.50000000, 0.20000000));
inputVariable5->addTerm(new fl::Gaussian("medium", 1.00000000, 0.20000000));
inputVariable5->addTerm(new fl::Gaussian("large", 1.50000000, 0.20000000));
engine->addInputVariable(inputVariable5);

fl::OutputVariable* outputVariable = new fl::OutputVariable;
outputVariable->setEnabled(true);
outputVariable->setName("out");
outputVariable->setRange(-10.00000000, 10.00000000);
outputVariable->setLockOutputRange(false);
outputVariable->setDefaultValue(fl::nan);
outputVariable->setLockValidOutput(false);
outputVariable->setDefuzzifier(new fl::WeightedAverage);
outputVariable->fuzzyOutput()->setAccumulation(new fl::Maximum);
outputVariable->addTerm(fl::Linear::create("outmf1", engine->inputVariables(), 32.16600000, 5.83500000, 3.16200000, 3.75700000, 0.00000000, 0.00000000));
outputVariable->addTerm(fl::Linear::create("outmf2", engine->inputVariables(), 39.01200000, 9.94700000, 3.16200000, 4.26900000, 0.00000000, 0.00000000));
outputVariable->addTerm(fl::Linear::create("outmf3", engine->inputVariables(), 45.00900000, 13.98500000, 3.16200000, 4.66600000, 0.00000000, 0.00000000));
engine->addOutputVariable(outputVariable);

fl::RuleBlock* ruleBlock = new fl::RuleBlock;
ruleBlock->setEnabled(true);
ruleBlock->setName("");
ruleBlock->setConjunction(new fl::AlgebraicProduct);
ruleBlock->setDisjunction(new fl::Maximum);
ruleBlock->setActivation(new fl::AlgebraicProduct);
ruleBlock->addRule(fl::Rule::parse("if in5 is small then out is outmf1", engine));
ruleBlock->addRule(fl::Rule::parse("if in5 is medium then out is outmf2", engine));
ruleBlock->addRule(fl::Rule::parse("if in5 is large then out is outmf3", engine));
engine->addRuleBlock(ruleBlock);


}