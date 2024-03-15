#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassRunesEndTimeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRunesEndTimeComponent"));
	}

	 Il2CppDictionary<RuneSlotKey, int64_t>*& Values() {
		return *(Il2CppDictionary<RuneSlotKey, int64_t>**)((uintptr_t)this + 0x10);
	}

	template <typename R = int64_t> R GetEndTime(PlayerClassType classType, int32_t index) {
		return ((R (*)(ClassRunesEndTimeComponent*, PlayerClassType, int32_t))(Il2CppBase() + 0x159F088))(this, classType, index);
	}
	template <typename R = bool> R SetEndTimeFromRune(PlayerClassType classType, int32_t index, ItemEntity* runeEntity, int64_t now) {
		return ((R (*)(ClassRunesEndTimeComponent*, PlayerClassType, int32_t, ItemEntity*, int64_t))(Il2CppBase() + 0x159F140))(this, classType, index, runeEntity, now);
	}
	template <typename R = bool> R SetEndTime(PlayerClassType classType, int32_t index, int64_t endTime) {
		return ((R (*)(ClassRunesEndTimeComponent*, PlayerClassType, int32_t, int64_t))(Il2CppBase() + 0x159F1F4))(this, classType, index, endTime);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ClassRunesEndTimeComponent*, Il2CppObject*))(Il2CppBase() + 0x159F344))(this, targetObject);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ClassRunesEndTimeComponent*, uintptr_t))(Il2CppBase() + 0x159F45C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ClassRunesEndTimeComponent*, uintptr_t))(Il2CppBase() + 0x159F618))(this, reader);
	}

};

