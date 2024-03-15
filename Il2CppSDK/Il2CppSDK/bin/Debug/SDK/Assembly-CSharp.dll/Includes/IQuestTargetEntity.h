#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IQuestTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IQuestTargetEntity"));
	}


	template <typename R = bool> R get_isQuestTarget() {
		return ((R (*)(IQuestTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isQuestTarget(bool value) {
		return ((R (*)(IQuestTargetEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

