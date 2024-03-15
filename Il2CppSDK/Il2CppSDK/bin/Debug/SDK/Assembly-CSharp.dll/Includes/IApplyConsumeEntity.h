#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyConsumeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyConsumeEntity"));
	}


	template <typename R = ApplyConsumeComponent*> R get_applyConsume() {
		return ((R (*)(IApplyConsumeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyConsume() {
		return ((R (*)(IApplyConsumeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyConsume(Il2CppArray<Resource*>* newValues) {
		return ((R (*)(IApplyConsumeEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R ReplaceApplyConsume(Il2CppArray<Resource*>* newValues) {
		return ((R (*)(IApplyConsumeEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R RemoveApplyConsume() {
		return ((R (*)(IApplyConsumeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

