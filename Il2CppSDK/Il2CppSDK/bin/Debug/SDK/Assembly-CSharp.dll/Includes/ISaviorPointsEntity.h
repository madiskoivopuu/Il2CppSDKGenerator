#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISaviorPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISaviorPointsEntity"));
	}


	template <typename R = SaviorPointsComponent*> R get_saviorPoints() {
		return ((R (*)(ISaviorPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSaviorPoints() {
		return ((R (*)(ISaviorPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSaviorPoints(int32_t newCount) {
		return ((R (*)(ISaviorPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceSaviorPoints(int32_t newCount) {
		return ((R (*)(ISaviorPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveSaviorPoints() {
		return ((R (*)(ISaviorPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

