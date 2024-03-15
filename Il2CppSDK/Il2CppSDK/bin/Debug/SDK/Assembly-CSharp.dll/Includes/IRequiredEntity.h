#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRequiredEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRequiredEntity"));
	}


	template <typename R = RequiredComponent*> R get_required() {
		return ((R (*)(IRequiredEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRequired() {
		return ((R (*)(IRequiredEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRequired(int32_t newLevel) {
		return ((R (*)(IRequiredEntity*, int32_t))(Il2CppBase() + 0x0))(this, newLevel);
	}
	template <typename R = void> R ReplaceRequired(int32_t newLevel) {
		return ((R (*)(IRequiredEntity*, int32_t))(Il2CppBase() + 0x0))(this, newLevel);
	}
	template <typename R = void> R RemoveRequired() {
		return ((R (*)(IRequiredEntity*))(Il2CppBase() + 0x0))(this);
	}

};

