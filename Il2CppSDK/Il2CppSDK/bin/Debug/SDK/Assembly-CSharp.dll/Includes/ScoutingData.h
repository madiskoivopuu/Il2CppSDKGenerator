#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutingData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutingData"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = ServiceMessage*> R& Result() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ScoutingData*, uintptr_t))(Il2CppBase() + 0x1359634))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ScoutingData*, uintptr_t))(Il2CppBase() + 0x1359688))(this, reader);
	}

};

