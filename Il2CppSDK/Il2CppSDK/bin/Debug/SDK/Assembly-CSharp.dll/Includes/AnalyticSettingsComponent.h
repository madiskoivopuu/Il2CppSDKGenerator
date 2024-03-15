#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticSettingsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticSettingsComponent"));
	}

	template <typename R = Il2CppString*> R& EventName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& ActionName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ActionLabels> R& AddLabel() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ActionLabels> R& RemoveLabel() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AnalyticSettingsComponent*, Il2CppObject*))(Il2CppBase() + 0x129E528))(this, target);
	}

};

