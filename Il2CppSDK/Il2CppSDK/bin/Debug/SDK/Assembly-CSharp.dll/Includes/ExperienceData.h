#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExperienceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExperienceData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ExperienceData*, uintptr_t))(Il2CppBase() + 0x1684B08))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ExperienceData*, uintptr_t))(Il2CppBase() + 0x1684B5C))(this, reader);
	}

};

