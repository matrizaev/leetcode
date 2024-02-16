import pandas as pd

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
    return students.rename(
        {
            "id": "student_id",
            "first": "first_name",
            "last": "last_name",
            "age": "age_in_years"
        },
        axis=1
    )
