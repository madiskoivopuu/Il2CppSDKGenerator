#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TakeAllData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TakeAllData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& Full() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TakeAllData*, uintptr_t))(Il2CppBase() + 0x16A4858))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TakeAllData*, uintptr_t))(Il2CppBase() + 0x16A48AC))(this, reader);
	}

};

