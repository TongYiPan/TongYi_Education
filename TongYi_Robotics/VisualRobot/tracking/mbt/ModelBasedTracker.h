
class ModelBasedTracker {
protected:
  CameraParamters camera_parameters; 
  HomogeneousMatrix  homogeneous_matrix;
  Matrix oJo;
  bool is_oJo_identity;
  std::string model_file_name;
  bool model_initialised;
  std::string pose_saving_file_name;
  
};

