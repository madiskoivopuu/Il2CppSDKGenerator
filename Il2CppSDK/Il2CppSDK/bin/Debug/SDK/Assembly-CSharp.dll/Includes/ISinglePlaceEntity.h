#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISinglePlaceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISinglePlaceEntity"));
	}


	template <typename R = SinglePlaceComponent*> R get_singlePlace() {
		return ((R (*)(ISinglePlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSinglePlace() {
		return ((R (*)(ISinglePlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSinglePlace(float newRadius, int32_t newOwnMaxCount, int32_t newGlobalMaxCount, Il2CppString* newName) {
		return ((R (*)(ISinglePlaceEntity*, float, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newRadius, newOwnMaxCount, newGlobalMaxCount, newName);
	}
	template <typename R = void> R ReplaceSinglePlace(float newRadius, int32_t newOwnMaxCount, int32_t newGlobalMaxCount, Il2CppString* newName) {
		return ((R (*)(ISinglePlaceEntity*, float, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newRadius, newOwnMaxCount, newGlobalMaxCount, newName);
	}
	template <typename R = void> R RemoveSinglePlace() {
		return ((R (*)(ISinglePlaceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

