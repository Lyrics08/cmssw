#ifndef RecoMuon_StandAloneTrackFinder_StandAloneMuonSmoother_H
#define RecoMuon_StandAloneTrackFinder_StandAloneMuonSmoother_H

/** \class StandAloneMuonSmoother
 *  The outward-inward fitter (starts from StandAloneMuonBackwardFilter innermost state).
 *
 *  $Date: 2006/05/19 15:24:35 $
 *  $Revision: 1.4 $
 *  \author R. Bellan - INFN Torino
 */

namespace edm {class ParameterSet; class EventSetup; class Event;}

class StandAloneMuonSmoother {
public:
  /// Constructor
  StandAloneMuonSmoother(const edm::ParameterSet& par);

  /// Destructor
  virtual ~StandAloneMuonSmoother(){};

  // Operations
  virtual void setES(const edm::EventSetup& setup);
  
  /// Pass the Event to the algo at each event
  virtual void setEvent(const edm::Event& event);


protected:

private:

};
#endif

