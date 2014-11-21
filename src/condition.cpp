#include <rms/condition.hpp>
#include <sstream>

using namespace std;
using namespace librms;

condition::condition(rms *client, unsigned int id, string name, unsigned int study_id, unsigned int iface_id, unsigned int environment_id, string created, string modified)
    :
    name_(name), created_(created), modified_(modified)
{
  id_ = id;
  study_id_ = study_id;
  iface_id_ = iface_id;
  environment_id_ = environment_id;
  client_ = client;
}

unsigned int condition::get_id() const
{
  return id_;
}

string condition::get_name() const
{
  return name_;
}


unsigned int condition::get_study_id() const
{
  return study_id_;
}


unsigned int condition::get_iface_id() const
{
  return iface_id_;
}


unsigned int condition::get_environment_id() const
{
  return environment_id_;
}

string condition::get_created() const
{
  return created_;
}

string condition::get_modified() const
{
  return modified_;
}

std::vector<librms::log> &condition::get_logs()
{
  if (!logs_fetched_)
  {
//    stringstream ss;
//    ss << "SELECT * FROM `conditions` WHERE `study_id`=" << id_ << ";";
//    MYSQL_RES *res = client_->query(ss.str());
//    if (res)
//    {
//      // parse and get it
//      MYSQL_ROW row;
//      while ((row = mysql_fetch_row(res)) != NULL)
//      {
//        condition c(client_, atoi(row[0]), string(row[1]), atoi(row[2]), atoi(row[3]), atoi(row[4]), string(row[5]), string(row[6]));
//        conditions_.push_back(c);
//      }
//      mysql_free_result(res);
      logs_fetched_ = true;
//    }
  }
  return logs_;
}
