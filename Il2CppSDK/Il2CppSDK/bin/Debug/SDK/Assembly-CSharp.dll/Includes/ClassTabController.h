#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassTabController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassTabController"));
	}

	template <typename R = uintptr_t> R& scrollRect() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ScrollButton*> R& left() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ScrollButton*> R& right() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& maxVisibleCount() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& content() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = ClassTabButton*> R& tabRefab() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = PolyAndCodeUI::RecyclableScrollRect*> R& recyclableScrollRect() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Il2CppList<ClassTabButton*>*& tabs() {
		return *(Il2CppList<ClassTabButton*>**)((uintptr_t)this + 0x50);
	}
	template <typename R = IClassTabsControllerContext*> R& context() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 Il2CppDictionary<int32_t, int32_t>*& topClassViews() {
		return *(Il2CppDictionary<int32_t, int32_t>**)((uintptr_t)this + 0x60);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ClassTabController*))(Il2CppBase() + 0x18F82A4))(this);
	}
	template <typename R = void> R Init(IClassTabsControllerContext* context, AccountEntity* account, GameEntity* avatar) {
		return ((R (*)(ClassTabController*, IClassTabsControllerContext*, AccountEntity*, GameEntity*))(Il2CppBase() + 0x18F82E0))(this, context, account, avatar);
	}
	template <typename R = void> R OnTabClick(ClassTabButton* tab) {
		return ((R (*)(ClassTabController*, ClassTabButton*))(Il2CppBase() + 0x18F9290))(this, tab);
	}
	template <typename R = bool> R TryShowClass(ItemEntity* classItem) {
		return ((R (*)(ClassTabController*, ItemEntity*))(Il2CppBase() + 0x18F9324))(this, classItem);
	}
	template <typename R = void> R ShowTab(ClassTabButton* activeTab) {
		return ((R (*)(ClassTabController*, ClassTabButton*))(Il2CppBase() + 0x18F9068))(this, activeTab);
	}
	template <typename R = void> R Update() {
		return ((R (*)(ClassTabController*))(Il2CppBase() + 0x18F948C))(this);
	}
	template <typename R = void> R UpdateView(int64_t playerId, bool hasPremium) {
		return ((R (*)(ClassTabController*, int64_t, bool))(Il2CppBase() + 0x18F95B0))(this, playerId, hasPremium);
	}
	template <typename R = ClassTabButton*> R GetActiveTab(int32_t index) {
		return ((R (*)(ClassTabController*, int32_t))(Il2CppBase() + 0x18F96D4))(this, index);
	}

};

