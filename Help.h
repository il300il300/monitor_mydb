/***********************************************
 * Author: xiaozhong
 * E-mail: xiaojiezhong991@163.com
 * Created Time: 2017-02-07 13:11
 **********************************************/
#include <iomanip>
void show_help()
{
    cout << "QPS:" << endl;
    cout << setw(5) << "" << "ins: Com_insert\n";
    cout << setw(5) << "" << "upd: Com_update\n";
    cout << setw(5) << "" << "del: Com_delete\n";
    cout << setw(5) << "" << "sel: Com_select\n";
    cout << setw(5) << "" << "qus: Questions\n";

    cout << "LOCK:" << endl;
    cout << setw(5) << "" << "lok: Innodb_row_lock_current_waits\n";

    cout << "tmp_table:" << endl;
    cout << setw(5) << "" << "cdt: Created_tmp_disk_tables\n";
    cout << setw(5) << "" << "ctt: Created_tmp_tables\n";

    cout << "innodb_buf:" << endl;
    cout << setw(5) << "" << "pr: Innodb_buffer_pool_reads\n";
    cout << setw(5) << "" << "rr:Innodb_buffer_pool_read_requests\n";

    cout << "Handler:" << endl;
    cout << setw(5) << "" << "hrf: Handler_read_first\n";
    cout << setw(5) << "" << "hrk: Handler_read_key\n";
    cout << setw(5) << "" << "hrn: Handler_read_next\n";
    cout << setw(5) << "" << "hrp: Handler_read_prev\n";
    cout << setw(5) << "" << "hrr: Handler_read_rnd\n";
    cout << setw(5) << "" << "rrn: Handler_read_rnd_next\n";
    
    cout << "innodb_log:" << endl;
    cout << setw(5) << "" << "p_f: Innodb_os_log_pending_fsyncs\n";
    cout << setw(5) << "" << "p_w: Innodb_os_log_pending_writes\n";
    cout << setw(5) << "" << "wai: Innodb_log_waits\n";
    
    cout << "thread:" << endl;
    cout << setw(5) << "" << "con: Threads_connected\n";
    cout << setw(5) << "" << "run: Threads_running\n";
    
}
