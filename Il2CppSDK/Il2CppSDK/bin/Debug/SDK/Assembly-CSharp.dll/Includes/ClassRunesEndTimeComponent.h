#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassRunesEndTimeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRunesEndTimeComponent"));
	}

	template <typename T = Il2CppDictionary<RuneSlotKey*, int64_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int64_t> T GetEndTime(PlayerClassType* classType, int32_t index) {
		return ((T (*)(ClassRunesEndTimeComponent*, PlayerClassType*, int32_t))(Il2CppBase() + 0x159F088))(this, classType, index);
	}
	template <typename T = bool> T SetEndTimeFromRune(PlayerClassType* classType, int32_t index, ItemEntity* runeEntity, int64_t now) {
		return ((T (*)(ClassRunesEndTimeComponent*, PlayerClassType*, int32_t, ItemEntity*, int64_t))(Il2CppBase() + 0x159F140))(this, classType, index, runeEntity, now);
	}
	template <typename T = bool> T SetEndTime(PlayerClassType* classType, int32_t index, int64_t endTime) {
		return ((T (*)(ClassRunesEndTimeComponent*, PlayerClassType*, int32_t, int64_t))(Il2CppBase() + 0x159F1F4))(this, classType, index, endTime);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(ClassRunesEndTimeComponent*, Il2CppObject*))(Il2CppBase() + 0x159F344))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ClassRunesEndTimeComponent*, uintptr_t))(Il2CppBase() + 0x159F45C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ClassRunesEndTimeComponent*, uintptr_t))(Il2CppBase() + 0x159F618))(this, reader);
	}

};

