#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RavenNestStatsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestStatsView"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _selected() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _endTimeTitle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _endTimeText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _statTitle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _startTimeText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _playerText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _actionText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _activeRaven() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _deactiveRaven() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _statsContainer() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _statLinePrefab() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _statLines() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _stat() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& Opened() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = bool> T get_Opened() {
		return ((T (*)(RavenNestStatsView*))(Il2CppBase() + 0x1390634))(this);
	}
	template <typename T = void> T set_Opened(bool value) {
		return ((T (*)(RavenNestStatsView*, bool))(Il2CppBase() + 0x139063C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RavenNestStatsView*))(Il2CppBase() + 0x1390648))(this);
	}
	template <typename T = void> T ShowStat(uintptr_t stat) {
		return ((T (*)(RavenNestStatsView*, uintptr_t))(Il2CppBase() + 0x13906E4))(this, stat);
	}
	template <typename T = void> T ShowEndTime(int64_t endTime) {
		return ((T (*)(RavenNestStatsView*, int64_t))(Il2CppBase() + 0x13915D8))(this, endTime);
	}
	template <typename T = void> T SetOpen(bool open) {
		return ((T (*)(RavenNestStatsView*, bool))(Il2CppBase() + 0x1390E64))(this, open);
	}
	template <typename T = uintptr_t> T GetLine(int32_t index) {
		return ((T (*)(RavenNestStatsView*, int32_t))(Il2CppBase() + 0x1391750))(this, index);
	}
	template <typename T = Il2CppString*> T GetScoutingText(int32_t scoutingCount) {
		return ((T (*)(RavenNestStatsView*, int32_t))(Il2CppBase() + 0x1391864))(this, scoutingCount);
	}
	template <typename T = Il2CppString*> T GetExitText(int64_t exit) {
		return ((T (*)(RavenNestStatsView*, int64_t))(Il2CppBase() + 0x1392554))(this, exit);
	}
	template <typename T = Il2CppString*> T GetDestroyText(uintptr_t item) {
		return ((T (*)(RavenNestStatsView*, uintptr_t))(Il2CppBase() + 0x1391988))(this, item);
	}
	template <typename T = Il2CppString*> T GetKillText(uintptr_t item) {
		return ((T (*)(RavenNestStatsView*, uintptr_t))(Il2CppBase() + 0x1391CB8))(this, item);
	}
	template <typename T = Il2CppString*> T GetDeathText(uintptr_t item) {
		return ((T (*)(RavenNestStatsView*, uintptr_t))(Il2CppBase() + 0x13922CC))(this, item);
	}
	template <typename T = Il2CppString*> T GetStolenText(uintptr_t item) {
		return ((T (*)(RavenNestStatsView*, uintptr_t))(Il2CppBase() + 0x1391F24))(this, item);
	}
	template <typename T = void> T Awakeb__18_0() {
		return ((T (*)(RavenNestStatsView*))(Il2CppBase() + 0x13926EC))(this);
	}

};

}
