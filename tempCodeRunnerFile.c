

    Studenty studenty1 = {"bob", 30, 2.5, true};
    Studenty studenty2 = {0};

    strcpy(studenty2.name, "Patrick");
    studenty2.age = 27;
    studenty2.gpa = 4.0;
    studenty2.isFullTime = true;

    printStudenty(studenty1);
    printf("\n");
    printStudenty(studenty2);

    return 0;
