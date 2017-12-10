struct Employee {
    int employee_id;
    struct Employee *reportee;
    struct Employee *reportee_tail;
};
