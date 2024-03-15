#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IParametersEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IParametersEntity"));
	}


	template <typename R = ParametersComponent*> R get_parameters() {
		return ((R (*)(IParametersEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasParameters() {
		return ((R (*)(IParametersEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddParameters(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IParametersEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R ReplaceParameters(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IParametersEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R RemoveParameters() {
		return ((R (*)(IParametersEntity*))(Il2CppBase() + 0x0))(this);
	}

};

