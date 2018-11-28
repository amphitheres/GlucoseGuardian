#ifndef REPORTMAKER_H
#define REPORTMAKER_H

#include "GraphMaker.h"
#include "PatientInfo.h"
#include "LatexHelper.h"

/** \class ReportMaker
 * \brief Makes a pdf report documenting a patient's health over a week. 
 * 
 * Reports are made by outputting to LaTex, using the graph created by graphmaker.
*/
class ReportMaker
{
    public:
        /// the Constructor for ReportMaker
        ReportMaker(
            PatientInfo* patient, ///< the patient whose data will be graphed
            GraphMaker graphMaker, ///< the graphmaker which will be used to graph the patient data
            std::string templateFile = "base/reports/report01" ///< latex template file to generate the doc with.
            );
        std::string makeReport();
    private:
        PatientInfo* patient; ///< the patient whose data will be graphed
        GraphMaker graphMaker; ///< the graphmaker which will be used to graph the patient data
        std::string templateFile;
};

#endif