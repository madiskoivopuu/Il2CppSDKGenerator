#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyTournamentsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyTournamentsComponent"));
	}

	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& NextTimeActivated() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& SearchStarted() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(DailyTournamentsComponent*, Il2CppObject*))(Il2CppBase() + 0x164A6FC))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DailyTournamentsComponent*, uintptr_t))(Il2CppBase() + 0x164A7A0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DailyTournamentsComponent*, uintptr_t))(Il2CppBase() + 0x164A868))(this, writer);
	}

};

