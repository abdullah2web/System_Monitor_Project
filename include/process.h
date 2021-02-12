#ifndef PROCESS_H
#define PROCESS_H

#include <string>
/*
Basic class for Process representation
It contains relevant attributes as shown below
*/
class Process {
 public:
  Process(int pid);
  int Pid() const;                               // See src/process.cpp
  std::string User() const;                      // See src/process.cpp
  std::string Command() const;                   // See src/process.cpp
  float CpuUtilization() const;                  // See src/process.cpp
  std::string Ram() const;                      // See src/process.cpp
  int getRam() const; 
  long int UpTime() const;                       // See src/process.cpp
  bool operator<(Process const& a) const;  // See src/process.cpp

  // Declare the necessary private members
 private:
  int m_pid;
  long m_ram;
  float m_utilization;
  long m_uptime;
  std::string m_command;
  std::string m_user;

};

#endif