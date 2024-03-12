#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractTargetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractTargetData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(InteractTargetData*, uintptr_t))(Il2CppBase() + 0x146A728))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(InteractTargetData*, uintptr_t))(Il2CppBase() + 0x146A77C))(this, reader);
	}

};

}
