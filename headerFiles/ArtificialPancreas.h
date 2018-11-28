#ifndef ARTIFICIAL_PANCREAS_H
#define ARTIFICIAL_PANCREAS_H

#include "MedicationCalculator.h"
#include "PatientInfo.h"
#include "InsulinPump.h"
#include "LaptopOutput.h"
#include "HormoneDose.h"
#include "DeviceRecord.h"
#include "GlucoseReading.h"
#include "EmailNotification.h"

class ArtificialPancreas
{
    private:
        PatientInfo *user;
        InsulinPump *output;
        EmailNotification *email;
    public:
        ArtificialPancreas();
        ~ArtificialPancreas();
        void setPatient(PatientInfo *);
        PatientInfo * getPatientInfo();
        void calculateMedication(const double, std::string);
		void manuallyAdministerInsulin(const double);
};

#endif