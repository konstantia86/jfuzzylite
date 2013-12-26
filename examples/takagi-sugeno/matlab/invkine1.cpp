#include <fl/Headers.h>

int main(int argc, char** argv){
fl::Engine* engine = new fl::Engine;
engine->setName("invkine1");

fl::InputVariable* inputVariable1 = new fl::InputVariable;
inputVariable1->setEnabled(true);
inputVariable1->setName("input1");
inputVariable1->setRange(-6.28700000, 17.00000000);
inputVariable1->addTerm(new fl::Bell("in1mf1", -6.12200000, 2.25900000, 1.76100000));
inputVariable1->addTerm(new fl::Bell("in1mf2", -2.18100000, 2.09500000, 2.23200000));
inputVariable1->addTerm(new fl::Bell("in1mf3", 2.08000000, 2.15700000, 1.31400000));
inputVariable1->addTerm(new fl::Bell("in1mf4", 4.96200000, 2.79000000, 2.50800000));
inputVariable1->addTerm(new fl::Bell("in1mf5", 9.33800000, 2.50600000, 1.81200000));
inputVariable1->addTerm(new fl::Bell("in1mf6", 13.15000000, 2.36300000, 2.26700000));
inputVariable1->addTerm(new fl::Bell("in1mf7", 17.78900000, 1.31000000, 1.75600000));
engine->addInputVariable(inputVariable1);

fl::InputVariable* inputVariable2 = new fl::InputVariable;
inputVariable2->setEnabled(true);
inputVariable2->setName("input2");
inputVariable2->setRange(0.00000000, 16.97200000);
inputVariable2->addTerm(new fl::Bell("in2mf1", 0.62100000, 1.74100000, 2.45400000));
inputVariable2->addTerm(new fl::Bell("in2mf2", 2.40600000, 0.86600000, 1.27800000));
inputVariable2->addTerm(new fl::Bell("in2mf3", 4.88300000, 1.81400000, 2.40200000));
inputVariable2->addTerm(new fl::Bell("in2mf4", 8.08700000, 1.94100000, 1.92900000));
inputVariable2->addTerm(new fl::Bell("in2mf5", 11.42800000, 2.33300000, 2.02200000));
inputVariable2->addTerm(new fl::Bell("in2mf6", 14.57900000, 2.22100000, 1.85800000));
inputVariable2->addTerm(new fl::Bell("in2mf7", 17.81300000, 0.82000000, 1.57700000));
engine->addInputVariable(inputVariable2);

fl::OutputVariable* outputVariable = new fl::OutputVariable;
outputVariable->setEnabled(true);
outputVariable->setName("output");
outputVariable->setRange(0.00000000, 1.50000000);
outputVariable->setLockOutputRange(false);
outputVariable->setDefaultValue(fl::nan);
outputVariable->setLockValidOutput(false);
outputVariable->setDefuzzifier(new fl::WeightedAverage);
outputVariable->fuzzyOutput()->setAccumulation(new fl::Maximum);
outputVariable->addTerm(fl::Linear::create("out1mf1", engine->inputVariables(), -0.91200000, 2.51700000, 0.06100000));
outputVariable->addTerm(fl::Linear::create("out1mf2", engine->inputVariables(), -2.15300000, -2.20400000, -4.03700000));
outputVariable->addTerm(fl::Linear::create("out1mf3", engine->inputVariables(), -0.10700000, -0.14800000, 1.92000000));
outputVariable->addTerm(fl::Linear::create("out1mf4", engine->inputVariables(), -0.08800000, -0.07100000, 1.59300000));
outputVariable->addTerm(fl::Linear::create("out1mf5", engine->inputVariables(), -0.09800000, -0.04000000, 1.36100000));
outputVariable->addTerm(fl::Linear::create("out1mf6", engine->inputVariables(), -0.06800000, -0.02700000, 1.61700000));
outputVariable->addTerm(fl::Linear::create("out1mf7", engine->inputVariables(), -1.90100000, -0.08100000, 0.18500000));
outputVariable->addTerm(fl::Linear::create("out1mf8", engine->inputVariables(), 16.65100000, 11.71300000, 6.80300000));
outputVariable->addTerm(fl::Linear::create("out1mf9", engine->inputVariables(), -4.15200000, -1.03300000, -4.75500000));
outputVariable->addTerm(fl::Linear::create("out1mf10", engine->inputVariables(), -0.12300000, 0.00400000, 0.86100000));
outputVariable->addTerm(fl::Linear::create("out1mf11", engine->inputVariables(), -0.10200000, 0.00600000, 0.81600000));
outputVariable->addTerm(fl::Linear::create("out1mf12", engine->inputVariables(), -0.08900000, 0.03800000, 0.51500000));
outputVariable->addTerm(fl::Linear::create("out1mf13", engine->inputVariables(), -0.07400000, 0.08200000, -0.06100000));
outputVariable->addTerm(fl::Linear::create("out1mf14", engine->inputVariables(), -0.00900000, -0.17300000, 4.84100000));
outputVariable->addTerm(fl::Linear::create("out1mf15", engine->inputVariables(), -7.99500000, -2.81800000, 17.91000000));
outputVariable->addTerm(fl::Linear::create("out1mf16", engine->inputVariables(), 0.67400000, 0.74500000, -2.16700000));
outputVariable->addTerm(fl::Linear::create("out1mf17", engine->inputVariables(), -0.13000000, -0.00400000, 0.86900000));
outputVariable->addTerm(fl::Linear::create("out1mf18", engine->inputVariables(), -0.09400000, 0.06100000, 0.36600000));
outputVariable->addTerm(fl::Linear::create("out1mf19", engine->inputVariables(), -0.08700000, 0.12100000, -0.39500000));
outputVariable->addTerm(fl::Linear::create("out1mf20", engine->inputVariables(), -0.06100000, 0.16200000, -1.31200000));
outputVariable->addTerm(fl::Linear::create("out1mf21", engine->inputVariables(), -0.16300000, 0.92000000, -13.25300000));
outputVariable->addTerm(fl::Linear::create("out1mf22", engine->inputVariables(), 1.41700000, 3.07200000, 1.88100000));
outputVariable->addTerm(fl::Linear::create("out1mf23", engine->inputVariables(), -0.95000000, -0.73200000, 3.12800000));
outputVariable->addTerm(fl::Linear::create("out1mf24", engine->inputVariables(), -0.05800000, 0.16200000, -0.53000000));
outputVariable->addTerm(fl::Linear::create("out1mf25", engine->inputVariables(), -0.04400000, 0.07700000, -0.12100000));
outputVariable->addTerm(fl::Linear::create("out1mf26", engine->inputVariables(), -0.06100000, 0.05400000, 0.27300000));
outputVariable->addTerm(fl::Linear::create("out1mf27", engine->inputVariables(), -0.06800000, 0.09900000, -0.25000000));
outputVariable->addTerm(fl::Linear::create("out1mf28", engine->inputVariables(), 0.42900000, 0.61000000, -9.11800000));
outputVariable->addTerm(fl::Linear::create("out1mf29", engine->inputVariables(), -6.66100000, -3.69700000, 0.01500000));
outputVariable->addTerm(fl::Linear::create("out1mf30", engine->inputVariables(), -3.54400000, 8.99500000, 0.39600000));
outputVariable->addTerm(fl::Linear::create("out1mf31", engine->inputVariables(), 0.21000000, -0.13700000, -1.01000000));
outputVariable->addTerm(fl::Linear::create("out1mf32", engine->inputVariables(), -0.00300000, 0.13700000, -1.21000000));
outputVariable->addTerm(fl::Linear::create("out1mf33", engine->inputVariables(), -0.03000000, 0.01800000, 0.10700000));
outputVariable->addTerm(fl::Linear::create("out1mf34", engine->inputVariables(), -0.22700000, -0.30600000, 6.55000000));
outputVariable->addTerm(fl::Linear::create("out1mf35", engine->inputVariables(), 11.00500000, -3.37500000, -1.13500000));
outputVariable->addTerm(fl::Linear::create("out1mf36", engine->inputVariables(), 0.57800000, 0.03300000, -0.10400000));
outputVariable->addTerm(fl::Linear::create("out1mf37", engine->inputVariables(), 0.89500000, -3.26800000, -0.99200000));
outputVariable->addTerm(fl::Linear::create("out1mf38", engine->inputVariables(), 0.12500000, 0.00600000, -1.73300000));
outputVariable->addTerm(fl::Linear::create("out1mf39", engine->inputVariables(), 0.04400000, 0.00300000, -0.30300000));
outputVariable->addTerm(fl::Linear::create("out1mf40", engine->inputVariables(), -0.17900000, -0.09300000, 3.45800000));
outputVariable->addTerm(fl::Linear::create("out1mf41", engine->inputVariables(), 0.22200000, 0.59700000, -10.10200000));
outputVariable->addTerm(fl::Linear::create("out1mf42", engine->inputVariables(), 9.32000000, 13.69200000, 0.85800000));
outputVariable->addTerm(fl::Linear::create("out1mf43", engine->inputVariables(), 0.16100000, -0.11700000, -1.38200000));
outputVariable->addTerm(fl::Linear::create("out1mf44", engine->inputVariables(), 0.49500000, -0.83300000, -6.56400000));
outputVariable->addTerm(fl::Linear::create("out1mf45", engine->inputVariables(), 0.46500000, -0.78700000, -5.61000000));
outputVariable->addTerm(fl::Linear::create("out1mf46", engine->inputVariables(), 1.33400000, -3.01700000, -2.87100000));
outputVariable->addTerm(fl::Linear::create("out1mf47", engine->inputVariables(), 2.56100000, -0.86400000, -0.55700000));
outputVariable->addTerm(fl::Linear::create("out1mf48", engine->inputVariables(), 17.12300000, 11.15000000, 1.00600000));
outputVariable->addTerm(fl::Linear::create("out1mf49", engine->inputVariables(), 0.22000000, 0.15400000, 0.01000000));
engine->addOutputVariable(outputVariable);

fl::RuleBlock* ruleBlock = new fl::RuleBlock;
ruleBlock->setEnabled(true);
ruleBlock->setName("");
ruleBlock->setConjunction(new fl::AlgebraicProduct);
ruleBlock->setDisjunction(new fl::Maximum);
ruleBlock->setActivation(new fl::AlgebraicProduct);
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf1 then output is out1mf1", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf2 then output is out1mf2", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf3 then output is out1mf3", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf4 then output is out1mf4", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf5 then output is out1mf5", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf6 then output is out1mf6", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf7 then output is out1mf7", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf1 then output is out1mf8", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf2 then output is out1mf9", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf3 then output is out1mf10", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf4 then output is out1mf11", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf5 then output is out1mf12", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf6 then output is out1mf13", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf7 then output is out1mf14", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf1 then output is out1mf15", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf2 then output is out1mf16", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf3 then output is out1mf17", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf4 then output is out1mf18", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf5 then output is out1mf19", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf6 then output is out1mf20", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf7 then output is out1mf21", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf1 then output is out1mf22", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf2 then output is out1mf23", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf3 then output is out1mf24", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf4 then output is out1mf25", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf5 then output is out1mf26", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf6 then output is out1mf27", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf7 then output is out1mf28", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf1 then output is out1mf29", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf2 then output is out1mf30", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf3 then output is out1mf31", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf4 then output is out1mf32", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf5 then output is out1mf33", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf6 then output is out1mf34", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf7 then output is out1mf35", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf1 then output is out1mf36", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf2 then output is out1mf37", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf3 then output is out1mf38", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf4 then output is out1mf39", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf5 then output is out1mf40", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf6 then output is out1mf41", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf7 then output is out1mf42", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf1 then output is out1mf43", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf2 then output is out1mf44", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf3 then output is out1mf45", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf4 then output is out1mf46", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf5 then output is out1mf47", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf6 then output is out1mf48", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf7 then output is out1mf49", engine));
engine->addRuleBlock(ruleBlock);


}