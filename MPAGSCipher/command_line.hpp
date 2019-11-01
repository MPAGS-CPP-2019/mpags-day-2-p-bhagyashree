#ifndef MPAGSCIPHER_COMMAND_LINE_HPP
#define MPAGSCIPHER_COMMAND_LINE_HPP

#include <string>
#include <vector>


bool processCommandLine(const std::vector<std::string>& cmdLineArgs, bool& helpRequested, bool& versionRequested, std::string& inputFile, std::string& outputFile);


#endif // MPAGSCIPHER_COMMAND_LINE_HPP
