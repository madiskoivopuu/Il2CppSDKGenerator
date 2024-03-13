#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SelectedQuickSwitchClassesData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectedQuickSwitchClassesData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Classes() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SelectedQuickSwitchClassesData*, uintptr_t))(Il2CppBase() + 0x13624CC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SelectedQuickSwitchClassesData*, uintptr_t))(Il2CppBase() + 0x1362508))(this, reader);
	}

};

