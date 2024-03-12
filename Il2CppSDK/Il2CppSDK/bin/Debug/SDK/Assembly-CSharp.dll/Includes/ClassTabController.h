#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassTabController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassTabController"));
	}

	template <typename T = uintptr_t> T& scrollRect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& right() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& maxVisibleCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& tabRefab() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& recyclableScrollRect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabs() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& topClassViews() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ClassTabController*))(Il2CppBase() + 0x18F82A4))(this);
	}
	template <typename T = void> T Init(uintptr_t context, uintptr_t account, uintptr_t avatar) {
		return ((T (*)(ClassTabController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x18F82E0))(this, context, account, avatar);
	}
	template <typename T = void> T OnTabClick(uintptr_t tab) {
		return ((T (*)(ClassTabController*, uintptr_t))(Il2CppBase() + 0x18F9290))(this, tab);
	}
	template <typename T = bool> T TryShowClass(uintptr_t classItem) {
		return ((T (*)(ClassTabController*, uintptr_t))(Il2CppBase() + 0x18F9324))(this, classItem);
	}
	template <typename T = void> T ShowTab(uintptr_t activeTab) {
		return ((T (*)(ClassTabController*, uintptr_t))(Il2CppBase() + 0x18F9068))(this, activeTab);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ClassTabController*))(Il2CppBase() + 0x18F948C))(this);
	}
	template <typename T = void> T UpdateView(int64_t playerId, bool hasPremium) {
		return ((T (*)(ClassTabController*, int64_t, bool))(Il2CppBase() + 0x18F95B0))(this, playerId, hasPremium);
	}
	template <typename T = uintptr_t> T GetActiveTab(int32_t index) {
		return ((T (*)(ClassTabController*, int32_t))(Il2CppBase() + 0x18F96D4))(this, index);
	}

};

}
