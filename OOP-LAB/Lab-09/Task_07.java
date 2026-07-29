//Q7. A hospital is developing a Smart Healthcare System.
//Every patient must have a way to get treatment, but the exact treatment process depends on the type
//of patient.
//Patients may also have access to:
//         Insurance services, which provide coverage details
//         Emergency services, which provide immediate response
//Both insurance and emergency systems can provide a method to display the service status, but their
//implementations differ.
//Each patient record also contains a Medical History module, which is tightly linked to the patient and
//should not exist independently


interface Patient {
    void getTreatment();
}

interface InsuranceService {
    void showStatus();
}

interface EmergencyService {
    void showStatus();
}

class GeneralPatient implements Patient, InsuranceService, EmergencyService {
    private MedicalHistory medicalHistory;

    public GeneralPatient() {
        medicalHistory = new MedicalHistory();
    }

    @Override
    public void getTreatment() {
        System.out.println("Providing standard treatment to the patient.");
    }

    @Override
    public void showStatus() {
        System.out.println("Insurance status: Active, covers up to $5000.");
    }

    public void showEmergencyStatus() {
        System.out.println("Emergency response: Available immediately.");
    }

    class MedicalHistory {
        private String history;

        public void setHistory(String h) {
            history = h;
        }

        public String getHistory() {
            return history;
        }

        public void printHistory() {
            System.out.println("Medical History: " + history);
        }
    }

    public MedicalHistory getMedicalHistory() {
        return medicalHistory;
    }
}

class CriticalPatient implements Patient, InsuranceService, EmergencyService {
    private MedicalHistory medicalHistory;

    public CriticalPatient() {
        medicalHistory = new MedicalHistory();
    }

    @Override
    public void getTreatment() {
        System.out.println("Providing intensive care treatment to the patient.");
    }

    @Override
    public void showStatus() {
        System.out.println("Insurance status: Active, covers ICU treatment.");
    }

    public void showEmergencyStatus() {
        System.out.println("Emergency response: Immediate ICU support.");
    }

    class MedicalHistory {
        private String history;

        public void setHistory(String h) {
            history = h;
        }

        public String getHistory() {
            return history;
        }

        public void printHistory() {
            System.out.println("Medical History: " + history);
        }
    }

    public MedicalHistory getMedicalHistory() {
        return medicalHistory;
    }
}

class SmartHealthcareSystem {
    public static void main(String[] args) {
        GeneralPatient patient1 = new GeneralPatient();
        patient1.getTreatment();
        patient1.showStatus();
        patient1.showEmergencyStatus();
        patient1.getMedicalHistory().setHistory("Allergies: None, Previous Surgery: Appendectomy");
        patient1.getMedicalHistory().printHistory();

        System.out.println();

        CriticalPatient patient2 = new CriticalPatient();
        patient2.getTreatment();
        patient2.showStatus();
        patient2.showEmergencyStatus();
        patient2.getMedicalHistory().setHistory("Allergies: Penicillin, Heart Surgery: 2020");
        patient2.getMedicalHistory().printHistory();
    }
}