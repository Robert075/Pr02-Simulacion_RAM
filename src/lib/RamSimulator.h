
#include "Intructions.h"
#include <fstream>
#include <istream>
#include <vector>

class RamSimulator {
public:
  RamSimulator(std::istream &program_input);

private:
  std::vector<std::unique_ptr<Instruction>> program_;
  int pc_;
};
