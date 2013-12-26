#include <fl/Headers.h>

int main(int argc, char** argv){
fl::Engine* engine = new fl::Engine;
engine->setName("sugeno");

fl::InputVariable* inputVariable = new fl::InputVariable;
inputVariable->setEnabled(true);
inputVariable->setName("input");
inputVariable->setRange(-5.00000000, 5.00000000);
inputVariable->addTerm(new fl::Gaussian("low", -5.00000000, 4.00000000));
inputVariable->addTerm(new fl::Gaussian("high", 5.00000000, 4.00000000));
engine->addInputVariable(inputVariable);

fl::OutputVariable* outputVariable = new fl::OutputVariable;
outputVariable->setEnabled(true);
outputVariable->setName("output");
outputVariable->setRange(0.00000000, 1.00000000);
outputVariable->setLockOutputRange(false);
outputVariable->setDefaultValue(fl::nan);
outputVariable->setLockValidOutput(false);
outputVariable->setDefuzzifier(new fl::WeightedAverage);
outputVariable->fuzzyOutput()->setAccumulation(new fl::Maximum);
outputVariable->addTerm(fl::Linear::create("line1", engine->inputVariables(), -1.00000000, -1.00000000));
outputVariable->addTerm(fl::Linear::create("line2", engine->inputVariables(), 1.00000000, -1.00000000));
engine->addOutputVariable(outputVariable);

fl::RuleBlock* ruleBlock = new fl::RuleBlock;
ruleBlock->setEnabled(true);
ruleBlock->setName("");
ruleBlock->setConjunction(new fl::AlgebraicProduct);
ruleBlock->setDisjunction(new fl::AlgebraicSum);
ruleBlock->setActivation(new fl::Minimum);
ruleBlock->addRule(fl::Rule::parse("if input is low then output is line1", engine));
ruleBlock->addRule(fl::Rule::parse("if input is high then output is line2", engine));
engine->addRuleBlock(ruleBlock);


}