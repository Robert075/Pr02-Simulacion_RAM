

#include <fstream>
#include <regex>
#include <string>
enum class INSTRUCTION_TYPE {
  LOAD,
  STORE,
  ADD,
  SUB,
  MUL,
  DIV,
  READ,
  WRITE,
  JUMP,
  JZERO,
  JGTZ,
  HALT
};

enum class OPERAND_TYPE {
  CONSTANT, // ex. =5
  REGISTRY, // ex. 5
  RE_DIR,   // ex. *5
  NONE,
};

class Instruction {
private:
  INSTRUCTION_TYPE inst_;
  OPERAND_TYPE op_;
  std::string operand_;
};

/**
 *  @brief This function parses the input file and generates intructions.
 *  @param input_file A stream for reading the input file
 *  @return A vector with all instructions.
 * */
std::vector<std::unique_ptr<Instruction>>
ParseInstructions(std::ifstream &input_file);
