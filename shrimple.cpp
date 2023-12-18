#include <string>
#include <string_view>
#include <unordered_map>
#include <algorithm>

#include <iostream>

std::unordered_map<std::string, std::string> flags = {
    {"af", ":flag_af:"},
    {"al", ":flag_al:"},
    {"dz", ":flag_dz:"},
    {"as", ":flag_as:"},
    {"ad", ":flag_ad:"},
    {"ao", ":flag_ao:"},
    {"ai", ":flag_ai:"},
    {"aq", ":flag_aq:"},
    {"ag", ":flag_ag:"},
    {"ar", ":flag_ar:"},
    {"am", ":flag_am:"},
    {"aw", ":flag_aw:"},
    {"au", ":flag_au:"},
    {"at", ":flag_at:"},
    {"az", ":flag_az:"},
    {"bs", ":flag_bs:"},
    {"bh", ":flag_bh:"},
    {"bd", ":flag_bd:"},
    {"bb", ":flag_bb:"},
    {"by", ":flag_by:"},
    {"be", ":flag_be:"},
    {"bz", ":flag_bz:"},
    {"bj", ":flag_bj:"},
    {"bm", ":flag_bm:"},
    {"bt", ":flag_bt:"},
    {"bo", ":flag_bo:"},
    {"bq", ":flag_bq:"},
    {"ba", ":flag_ba:"},
    {"bw", ":flag_bw:"},
    {"bv", ":flag_bv:"},
    {"br", ":flag_br:"},
    {"io", ":flag_io:"},
    {"bn", ":flag_bn:"},
    {"bg", ":flag_bg:"},
    {"bf", ":flag_bf:"},
    {"bi", ":flag_bi:"},
    {"cv", ":flag_cv:"},
    {"kh", ":flag_kh:"},
    {"cm", ":flag_cm:"},
    {"ca", ":flag_ca:"},
    {"ky", ":flag_ky:"},
    {"cf", ":flag_cf:"},
    {"td", ":flag_td:"},
    {"cl", ":flag_cl:"},
    {"cn", ":flag_cn:"},
    {"cx", ":flag_cx:"},
    {"cc", ":flag_cc:"},
    {"co", ":flag_co:"},
    {"km", ":flag_km:"},
    {"cd", ":flag_cd:"},
    {"cg", ":flag_cg:"},
    {"ck", ":flag_ck:"},
    {"cr", ":flag_cr:"},
    {"hr", ":flag_hr:"},
    {"cu", ":flag_cu:"},
    {"cw", ":flag_cw:"},
    {"cy", ":flag_cy:"},
    {"cz", ":flag_cz:"},
    {"ci", ":flag_ci:"},
    {"dk", ":flag_dk:"},
    {"dj", ":flag_dj:"},
    {"dm", ":flag_dm:"},
    {"do", ":flag_do:"},
    {"ec", ":flag_ec:"},
    {"eg", ":flag_eg:"},
    {"sv", ":flag_sv:"},
    {"gq", ":flag_gq:"},
    {"er", ":flag_er:"},
    {"ee", ":flag_ee:"},
    {"sz", ":flag_sz:"},
    {"et", ":flag_et:"},
    {"fk", ":flag_fk:"},
    {"fo", ":flag_fo:"},
    {"fj", ":flag_fj:"},
    {"fi", ":flag_fi:"},
    {"fr", ":flag_fr:"},
    {"gf", ":flag_gf:"},
    {"pf", ":flag_pf:"},
    {"tf", ":flag_tf:"},
    {"ga", ":flag_ga:"},
    {"gm", ":flag_gm:"},
    {"ge", ":flag_ge:"},
    {"de", ":flag_de:"},
    {"gh", ":flag_gh:"},
    {"gi", ":flag_gi:"},
    {"gr", ":flag_gr:"},
    {"gl", ":flag_gl:"},
    {"gd", ":flag_gd:"},
    {"gp", ":flag_gp:"},
    {"gu", ":flag_gu:"},
    {"gt", ":flag_gt:"},
    {"gg", ":flag_gg:"},
    {"gn", ":flag_gn:"},
    {"gw", ":flag_gw:"},
    {"gy", ":flag_gy:"},
    {"ht", ":flag_ht:"},
    {"hm", ":flag_hm:"},
    {"va", ":flag_va:"},
    {"hn", ":flag_hn:"},
    {"hk", ":flag_hk:"},
    {"hu", ":flag_hu:"},
    {"is", ":flag_is:"},
    {"in", ":flag_in:"},
    {"id", ":flag_id:"},
    {"ir", ":flag_ir:"},
    {"iq", ":flag_iq:"},
    {"ie", ":flag_ie:"},
    {"im", ":flag_im:"},
    {"il", ":flag_il:"},
    {"it", ":flag_it:"},
    {"jm", ":flag_jm:"},
    {"jp", ":flag_jp:"},
    {"je", ":flag_je:"},
    {"jo", ":flag_jo:"},
    {"kz", ":flag_kz:"},
    {"ke", ":flag_ke:"},
    {"ki", ":flag_ki:"},
    {"kp", ":flag_kp:"},
    {"kr", ":flag_kr:"},
    {"kw", ":flag_kw:"},
    {"kg", ":flag_kg:"},
    {"la", ":flag_la:"},
    {"lv", ":flag_lv:"},
    {"lb", ":flag_lb:"},
    {"ls", ":flag_ls:"},
    {"lr", ":flag_lr:"},
    {"ly", ":flag_ly:"},
    {"li", ":flag_li:"},
    {"lt", ":flag_lt:"},
    {"lu", ":flag_lu:"},
    {"mo", ":flag_mo:"},
    {"mg", ":flag_mg:"},
    {"mw", ":flag_mw:"},
    {"my", ":flag_my:"},
    {"mv", ":flag_mv:"},
    {"ml", ":flag_ml:"},
    {"mt", ":flag_mt:"},
    {"mh", ":flag_mh:"},
    {"mq", ":flag_mq:"},
    {"mr", ":flag_mr:"},
    {"mu", ":flag_mu:"},
    {"yt", ":flag_yt:"},
    {"mx", ":flag_mx:"},
    {"fm", ":flag_fm:"},
    {"md", ":flag_md:"},
    {"mc", ":flag_mc:"},
    {"mn", ":flag_mn:"},
    {"me", ":flag_me:"},
    {"ms", ":flag_ms:"},
    {"ma", ":flag_ma:"},
    {"mz", ":flag_mz:"},
    {"mm", ":flag_mm:"},
    {"na", ":flag_na:"},
    {"nr", ":flag_nr:"},
    {"np", ":flag_np:"},
    {"nl", ":flag_nl:"},
    {"nc", ":flag_nc:"},
    {"nz", ":flag_nz:"},
    {"ni", ":flag_ni:"},
    {"ne", ":flag_ne:"},
    {"ng", ":flag_ng:"},
    {"nu", ":flag_nu:"},
    {"nf", ":flag_nf:"},
    {"mp", ":flag_mp:"},
    {"no", ":flag_no:"},
    {"om", ":flag_om:"},
    {"pk", ":flag_pk:"},
    {"pw", ":flag_pw:"},
    {"ps", ":flag_ps:"},
    {"pa", ":flag_pa:"},
    {"pg", ":flag_pg:"},
    {"py", ":flag_py:"},
    {"pe", ":flag_pe:"},
    {"ph", ":flag_ph:"},
    {"pn", ":flag_pn:"},
    {"pl", ":flag_pl:"},
    {"pt", ":flag_pt:"},
    {"pr", ":flag_pr:"},
    {"qa", ":flag_qa:"},
    {"mk", ":flag_mk:"},
    {"ro", ":flag_ro:"},
    {"ru", ":flag_ru:"},
    {"rw", ":flag_rw:"},
    {"re", ":flag_re:"},
    {"bl", ":flag_bl:"},
    {"sh", ":flag_sh:"},
    {"kn", ":flag_kn:"},
    {"lc", ":flag_lc:"},
    {"mf", ":flag_mf:"},
    {"pm", ":flag_pm:"},
    {"vc", ":flag_vc:"},
    {"ws", ":flag_ws:"},
    {"sm", ":flag_sm:"},
    {"st", ":flag_st:"},
    {"sa", ":flag_sa:"},
    {"sn", ":flag_sn:"},
    {"rs", ":flag_rs:"},
    {"sc", ":flag_sc:"},
    {"sl", ":flag_sl:"},
    {"sg", ":flag_sg:"},
    {"sx", ":flag_sx:"},
    {"sk", ":flag_sk:"},
    {"si", ":flag_si:"},
    {"sb", ":flag_sb:"},
    {"so", ":flag_so:"},
    {"za", ":flag_za:"},
    {"gs", ":flag_gs:"},
    {"ss", ":flag_ss:"},
    {"es", ":flag_es:"},
    {"lk", ":flag_lk:"},
    {"sd", ":flag_sd:"},
    {"sr", ":flag_sr:"},
    {"sj", ":flag_sj:"},
    {"se", ":flag_se:"},
    {"ch", ":flag_ch:"},
    {"sy", ":flag_sy:"},
    {"tw", ":flag_tw:"},
    {"tj", ":flag_tj:"},
    {"tz", ":flag_tz:"},
    {"th", ":flag_th:"},
    {"tl", ":flag_tl:"},
    {"tg", ":flag_tg:"},
    {"tk", ":flag_tk:"},
    {"to", ":flag_to:"},
    {"tt", ":flag_tt:"},
    {"tn", ":flag_tn:"},
    {"tr", ":flag_tr:"},
    {"tm", ":flag_tm:"},
    {"tc", ":flag_tc:"},
    {"tv", ":flag_tv:"},
    {"ug", ":flag_ug:"},
    {"ua", ":flag_ua:"},
    {"ae", ":flag_ae:"},
    {"gb", ":flag_gb:"},
    {"um", ":flag_um:"},
    {"us", ":flag_us:"},
    {"uy", ":flag_uy:"},
    {"uz", ":flag_uz:"},
    {"vu", ":flag_vu:"},
    {"ve", ":flag_ve:"},
    {"vn", ":flag_vn:"},
    {"vg", ":flag_vg:"},
    {"vi", ":flag_vi:"},
    {"wf", ":flag_wf:"},
    {"eh", ":flag_eh:"},
    {"ye", ":flag_ye:"},
    {"zm", ":flag_zm:"},
    {"zw", ":flag_zw:"},
    {"ax", ":flag_ax:"},
};

std::string str_tolower(std::string s)
{
    std::transform(s.begin(), s.end(), s.begin(), 
                   [](unsigned char c){ return std::tolower(c); } // correct
                  );
    return s;
}

char char_tolower(char ch)
{
    return static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
}

std::string shrimplify(std::string input)
{
    if (input.size() < 2)
    {
        return "";
    }

    input = str_tolower(input);

    std::string out;
    std::string working;
    working.resize(2, '\0');
    working[0] = input[0];
    for (size_t i = 1; i < input.size(); i++)
    {
        working[1] = input[i];
        if (auto it = flags.find(working); it != flags.end())
        {
            out += it->second;
            i++;
            if (i < input.size())
            {
                working[0] = input[i];
                continue;
            }
        }
        else if (std::isalpha(working[0]))
        {
            out += ":regional_indicator_";
            out += char_tolower(working[0]);
            out += ":";
        }
        else
        {
            out += working[0];
        }

        working[0] = working[1];
    }
    return out;
}

// I couldn't be bothered to give this a proper CLI
// Just paste this program into compiler explorer or something
const char* text = R"(
put the text that you want shrimplified here
)";

int main()
{
    std::cout << shrimplify(text) << '\n';
}
