#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample {
	public:
		Sample(void);
		~Sample(void);

		static int getNbInst(void); // Non member function - because it's 'static'!
		// int getNbInst(void); // Member function can be called only by an instance

	private:
		static int _nbInst;
	
};

#endif 		// SAMPLE_CLASS_HPP