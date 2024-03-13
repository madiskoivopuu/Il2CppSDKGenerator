#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IParametersEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IParametersEntity"));
	}


	template <typename T = ParametersComponent*> T get_parameters() {
		return ((T (*)(IParametersEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasParameters() {
		return ((T (*)(IParametersEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddParameters(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IParametersEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T ReplaceParameters(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IParametersEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T RemoveParameters() {
		return ((T (*)(IParametersEntity*))(Il2CppBase() + 0x0))(this);
	}

};

