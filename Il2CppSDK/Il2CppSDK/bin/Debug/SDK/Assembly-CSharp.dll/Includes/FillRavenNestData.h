#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FillRavenNestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FillRavenNestData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& SlotId() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = Il2CppString*> R& Resource() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FillRavenNestData*, uintptr_t))(Il2CppBase() + 0x1693754))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FillRavenNestData*, uintptr_t))(Il2CppBase() + 0x16937B8))(this, reader);
	}

};

