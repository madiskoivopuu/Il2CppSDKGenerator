#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassRunesEndTimeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRunesEndTimeComponent"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int64_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int64_t> T GetEndTime(uintptr_t classType, int32_t index) {
		return ((T (*)(ClassRunesEndTimeComponent*, uintptr_t, int32_t))(Il2CppBase() + 0x159F088))(this, classType, index);
	}
	template <typename T = bool> T SetEndTimeFromRune(uintptr_t classType, int32_t index, uintptr_t runeEntity, int64_t now) {
		return ((T (*)(ClassRunesEndTimeComponent*, uintptr_t, int32_t, uintptr_t, int64_t))(Il2CppBase() + 0x159F140))(this, classType, index, runeEntity, now);
	}
	template <typename T = bool> T SetEndTime(uintptr_t classType, int32_t index, int64_t endTime) {
		return ((T (*)(ClassRunesEndTimeComponent*, uintptr_t, int32_t, int64_t))(Il2CppBase() + 0x159F1F4))(this, classType, index, endTime);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ClassRunesEndTimeComponent*, uintptr_t))(Il2CppBase() + 0x159F344))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ClassRunesEndTimeComponent*, uintptr_t))(Il2CppBase() + 0x159F45C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ClassRunesEndTimeComponent*, uintptr_t))(Il2CppBase() + 0x159F618))(this, reader);
	}

};

}
