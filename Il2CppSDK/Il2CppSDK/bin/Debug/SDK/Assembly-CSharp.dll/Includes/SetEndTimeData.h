#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetEndTimeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetEndTimeData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& Value() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SetEndTimeData*, uintptr_t))(Il2CppBase() + 0x16240AC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SetEndTimeData*, uintptr_t))(Il2CppBase() + 0x1624100))(this, reader);
	}

};

