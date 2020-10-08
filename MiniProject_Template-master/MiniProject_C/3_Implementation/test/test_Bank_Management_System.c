#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <Bank_Management_System.h>
#define PROJECT_NAME    "Bank Management System"

/* Prototypes for all the test functions */
void test_new_acc(void);
void test_view_list(void);
void test_edit(void);
void test_transact(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "new_acc", test_new_acc);
  CU_add_test(suite, "view_list", test_view_list);
  CU_add_test(suite, "edit", test_edit);
  CU_add_test(suite, "transact", test_transact);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */
void test_new_acc(void) {
  CU_ASSERT(1 == new_acc(1));

  /* Dummy fail*/
  /* CU_ASSERT(1500 == add(750, 7500)); */
}

void test_view_list(void) {
  CU_ASSERT(1 == view_list(1));

  /* Dummy fail*/
  /* CU_ASSERT(1 == subtract(1000, 900)); */
}

void test_edit(void) {
  CU_ASSERT(1 == edit(1));

  /* Dummy fail*/
  /* CU_ASSERT(2 == multiply(2, 5)); */
}

void test_transact(void) {
  CU_ASSERT(1 == transact(1));

  /* Dummy fail*/
  /* CU_ASSERT(3 == divide(2, 2)); */
}
