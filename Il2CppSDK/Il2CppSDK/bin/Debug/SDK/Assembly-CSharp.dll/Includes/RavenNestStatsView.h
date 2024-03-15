#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RavenNestStatsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestStatsView"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _selected() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _endTimeTitle() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _endTimeText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _statTitle() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _startTimeText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _playerText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _actionText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _activeRaven() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _deactiveRaven() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _statsContainer() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _statLinePrefab() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	 Il2CppList<uintptr_t>*& _statLines() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x78);
	}
	template <typename R = Stat*> R& _stat() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = bool> R& Opened() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = bool> R get_Opened() {
		return ((R (*)(RavenNestStatsView*))(Il2CppBase() + 0x1390634))(this);
	}
	template <typename R = void> R set_Opened(bool value) {
		return ((R (*)(RavenNestStatsView*, bool))(Il2CppBase() + 0x139063C))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(RavenNestStatsView*))(Il2CppBase() + 0x1390648))(this);
	}
	template <typename R = void> R ShowStat(Stat* stat) {
		return ((R (*)(RavenNestStatsView*, Stat*))(Il2CppBase() + 0x13906E4))(this, stat);
	}
	template <typename R = void> R ShowEndTime(int64_t endTime) {
		return ((R (*)(RavenNestStatsView*, int64_t))(Il2CppBase() + 0x13915D8))(this, endTime);
	}
	template <typename R = void> R SetOpen(bool open) {
		return ((R (*)(RavenNestStatsView*, bool))(Il2CppBase() + 0x1390E64))(this, open);
	}
	template <typename R = uintptr_t> R GetLine(int32_t index) {
		return ((R (*)(RavenNestStatsView*, int32_t))(Il2CppBase() + 0x1391750))(this, index);
	}
	template <typename R = Il2CppString*> R GetScoutingText(int32_t scoutingCount) {
		return ((R (*)(RavenNestStatsView*, int32_t))(Il2CppBase() + 0x1391864))(this, scoutingCount);
	}
	template <typename R = Il2CppString*> R GetExitText(int64_t exit) {
		return ((R (*)(RavenNestStatsView*, int64_t))(Il2CppBase() + 0x1392554))(this, exit);
	}
	template <typename R = Il2CppString*> R GetDestroyText(ItemCount* item) {
		return ((R (*)(RavenNestStatsView*, ItemCount*))(Il2CppBase() + 0x1391988))(this, item);
	}
	template <typename R = Il2CppString*> R GetKillText(ItemCount* item) {
		return ((R (*)(RavenNestStatsView*, ItemCount*))(Il2CppBase() + 0x1391CB8))(this, item);
	}
	template <typename R = Il2CppString*> R GetDeathText(ItemCount* item) {
		return ((R (*)(RavenNestStatsView*, ItemCount*))(Il2CppBase() + 0x13922CC))(this, item);
	}
	template <typename R = Il2CppString*> R GetStolenText(ItemCount* item) {
		return ((R (*)(RavenNestStatsView*, ItemCount*))(Il2CppBase() + 0x1391F24))(this, item);
	}
	template <typename R = void> R Awakeb__18_0() {
		return ((R (*)(RavenNestStatsView*))(Il2CppBase() + 0x13926EC))(this);
	}

};

