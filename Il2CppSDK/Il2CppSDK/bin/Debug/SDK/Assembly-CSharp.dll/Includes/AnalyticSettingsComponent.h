#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticSettingsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticSettingsComponent"));
	}

	template <typename T = Il2CppString*> T& EventName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ActionName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ActionLabels*> T& AddLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = ActionLabels*> T& RemoveLabel() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(AnalyticSettingsComponent*, Il2CppObject*))(Il2CppBase() + 0x129E528))(this, target);
	}

};

