#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class RavenNestStatsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestStatsWindow"));
	}

	template <typename T = uintptr_t> T& _statsContainer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = RavenNestStatsView*> T& _statPrefab() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<RavenNestStatsView*>*> T& _stats() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _noRecords() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int64_t> T& _updateTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(RavenNestStatsWindow*))(Il2CppBase() + 0x13926FC))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(RavenNestStatsWindow*, float))(Il2CppBase() + 0x1392B38))(this, deltaTime);
	}
	template <typename T = void> T ShowStats(RavenNestStatsComponent* ravenNestStats) {
		return ((T (*)(RavenNestStatsWindow*, RavenNestStatsComponent*))(Il2CppBase() + 0x1392CA0))(this, ravenNestStats);
	}
	template <typename T = RavenNestStatsView*> T GetStatView(int32_t index) {
		return ((T (*)(RavenNestStatsWindow*, int32_t))(Il2CppBase() + 0x1392E98))(this, index);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(RavenNestStatsWindow*))(Il2CppBase() + 0x139292C))(this);
	}

};

