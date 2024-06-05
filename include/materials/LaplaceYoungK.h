
#pragma once

#include "Material.h"


class LaplaceYoungK : public Material
{
public:
  static InputParameters validParams();

  LaplaceYoungK(const InputParameters & parameters);

protected:
  /// Necessary override. This is where the values of the properties are computed.
  virtual void computeQpProperties() override;

  /// Material property "k(u)"
  ADMaterialProperty<Real> & _k;

  // THe gradient of u
  const ADVariableGradient & _grad_u;
};
