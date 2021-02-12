#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  float Utilization();  // See src/processor.cpp
  long CurrentTotal();
  long CurrentActive();
  long CurrentIdle();

  long PrevTotal();
  long PrevIdle();
  long PrevActive();
  void Update(long idle, long active, long total);

  // Declare the necessary private members
 private:
  long m_idle;
  long m_active;
  long m_total;
};

#endif