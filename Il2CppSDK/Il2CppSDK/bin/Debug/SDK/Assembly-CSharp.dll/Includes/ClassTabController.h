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
	template <typename T = ScrollButton*> T& left() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = ScrollButton*> T& right() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& maxVisibleCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = ClassTabButton*> T& tabRefab() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = RecyclableScrollRect*> T& recyclableScrollRect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<ClassTabButton*>*> T& tabs() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = IClassTabsControllerContext*> T& context() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& topClassViews() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ClassTabController*))(Il2CppBase() + 0x18F82A4))(this);
	}
	template <typename T = void> T Init(IClassTabsControllerContext* context, AccountEntity* account, GameEntity* avatar) {
		return ((T (*)(ClassTabController*, IClassTabsControllerContext*, AccountEntity*, GameEntity*))(Il2CppBase() + 0x18F82E0))(this, context, account, avatar);
	}
	template <typename T = void> T OnTabClick(ClassTabButton* tab) {
		return ((T (*)(ClassTabController*, ClassTabButton*))(Il2CppBase() + 0x18F9290))(this, tab);
	}
	template <typename T = bool> T TryShowClass(ItemEntity* classItem) {
		return ((T (*)(ClassTabController*, ItemEntity*))(Il2CppBase() + 0x18F9324))(this, classItem);
	}
	template <typename T = void> T ShowTab(ClassTabButton* activeTab) {
		return ((T (*)(ClassTabController*, ClassTabButton*))(Il2CppBase() + 0x18F9068))(this, activeTab);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ClassTabController*))(Il2CppBase() + 0x18F948C))(this);
	}
	template <typename T = void> T UpdateView(int64_t playerId, bool hasPremium) {
		return ((T (*)(ClassTabController*, int64_t, bool))(Il2CppBase() + 0x18F95B0))(this, playerId, hasPremium);
	}
	template <typename T = ClassTabButton*> T GetActiveTab(int32_t index) {
		return ((T (*)(ClassTabController*, int32_t))(Il2CppBase() + 0x18F96D4))(this, index);
	}

};

