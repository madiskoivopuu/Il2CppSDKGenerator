#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SelectedQuickSwitchClassesData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectedQuickSwitchClassesData"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Classes() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SelectedQuickSwitchClassesData*, uintptr_t))(Il2CppBase() + 0x13624CC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SelectedQuickSwitchClassesData*, uintptr_t))(Il2CppBase() + 0x1362508))(this, reader);
	}

};

