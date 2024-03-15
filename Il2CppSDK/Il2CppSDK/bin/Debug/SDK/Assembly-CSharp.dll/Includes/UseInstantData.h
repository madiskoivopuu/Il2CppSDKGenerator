#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UseInstantData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UseInstantData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UseInstantData*, uintptr_t))(Il2CppBase() + 0x1542928))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(UseInstantData*, uintptr_t))(Il2CppBase() + 0x154296C))(this, reader);
	}

};

