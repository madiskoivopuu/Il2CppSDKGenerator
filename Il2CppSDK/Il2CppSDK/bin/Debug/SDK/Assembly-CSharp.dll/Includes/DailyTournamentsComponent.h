#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyTournamentsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyTournamentsComponent"));
	}

	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& NextTimeActivated() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& SearchStarted() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(DailyTournamentsComponent*, Il2CppObject*))(Il2CppBase() + 0x164A6FC))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DailyTournamentsComponent*, uintptr_t))(Il2CppBase() + 0x164A7A0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DailyTournamentsComponent*, uintptr_t))(Il2CppBase() + 0x164A868))(this, writer);
	}

};

