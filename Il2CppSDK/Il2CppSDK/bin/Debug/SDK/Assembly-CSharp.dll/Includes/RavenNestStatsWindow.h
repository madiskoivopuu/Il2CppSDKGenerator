#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class RavenNestStatsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestStatsWindow"));
	}

	template <typename R = uintptr_t> R& _statsContainer() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = RavenNestStatsView*> R& _statPrefab() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	 Il2CppList<RavenNestStatsView*>*& _stats() {
		return *(Il2CppList<RavenNestStatsView*>**)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _noRecords() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int64_t> R& _updateTime() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(RavenNestStatsWindow*))(Il2CppBase() + 0x13926FC))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(RavenNestStatsWindow*, float))(Il2CppBase() + 0x1392B38))(this, deltaTime);
	}
	template <typename R = void> R ShowStats(RavenNestStatsComponent* ravenNestStats) {
		return ((R (*)(RavenNestStatsWindow*, RavenNestStatsComponent*))(Il2CppBase() + 0x1392CA0))(this, ravenNestStats);
	}
	template <typename R = RavenNestStatsView*> R GetStatView(int32_t index) {
		return ((R (*)(RavenNestStatsWindow*, int32_t))(Il2CppBase() + 0x1392E98))(this, index);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(RavenNestStatsWindow*))(Il2CppBase() + 0x139292C))(this);
	}

};

