#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", false, 145, 137), m_fileName("_Shrubbery")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form(src), m_fileName(src.m_fileName)
{

}


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :Form("ShrubberyCreationForm",	false, 145, 137), m_fileName(target + "_Shrubbery")
{
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm	&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (&rhs == this)
		return *this;
	m_fileName = rhs.m_fileName;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::ofstream  out_file;
    
    Form::execute(executor);
    out_file.open(m_fileName);
    if (m_myFileWriting.fail())
    {
        std::cerr << "Error openning the outfile" << std::endl;
    }
    out_file << "          1          " << std::endl;
    out_file << "         / \\         " << std::endl;
    out_file << "        /   \\        " << std::endl;
    out_file << "       /     \\       " << std::endl;
    out_file << "      2       3      " << std::endl;
    out_file << "     / \\     / \\     " << std::endl;
    out_file << "    4   5   6   7    " << std::endl;
    out_file << "   /   / \\     / \\   " << std::endl;
    out_file << "  8   9   1   2   3  " << std::endl;
    out_file << "     /               " << std::endl;
    out_file << "    4                " << std::endl;
    out_file.close();
    return ;
}
