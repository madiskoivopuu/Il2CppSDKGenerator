#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatContactView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatContactView"));
	}

	template <typename R = uintptr_t> R& PlayerNameText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& OnlineStatusToggle() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& SelectContact() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& AddContact() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& RemoveContact() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& MuteContact() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& UnMuteContact() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& UnreadMessagesHolder() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& UnreadMessagesText() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> R& GetUnreadMessagesCount() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = ContactsEntity*> R& _entity() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	 Action2<ContactsEntity*, bool>*& _onFriendChanged() {
		return *(Action2<ContactsEntity*, bool>**)((uintptr_t)this + 0x78);
	}
	 Action2<ContactsEntity*, bool>*& _onMuteChanged() {
		return *(Action2<ContactsEntity*, bool>**)((uintptr_t)this + 0x80);
	}
	 Action1<ContactsEntity*>*& _onSelected() {
		return *(Action1<ContactsEntity*>**)((uintptr_t)this + 0x88);
	}
	 Nullable1<int32_t>*& _count() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x90);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(ChatContactView*))(Il2CppBase() + 0x13F18E4))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ChatContactView*))(Il2CppBase() + 0x13F1AC0))(this);
	}
	template <typename R = void> R Initialize(ContactsEntity* entity, Action1<ContactsEntity*>* onSelected, Action2<ContactsEntity*, bool>* onFavouriteChanged, Action2<ContactsEntity*, bool>* onMuteChanged) {
		return ((R (*)(ChatContactView*, ContactsEntity*, Action1<ContactsEntity*>*, Action2<ContactsEntity*, bool>*, Action2<ContactsEntity*, bool>*))(Il2CppBase() + 0x13F1C9C))(this, entity, onSelected, onFavouriteChanged, onMuteChanged);
	}
	template <typename R = void> R OnSelectContactClicked() {
		return ((R (*)(ChatContactView*))(Il2CppBase() + 0x13F1E90))(this);
	}
	template <typename R = void> R OnRemoveContactClicked() {
		return ((R (*)(ChatContactView*))(Il2CppBase() + 0x13F1EF0))(this);
	}
	template <typename R = void> R OnAddContactClicked() {
		return ((R (*)(ChatContactView*))(Il2CppBase() + 0x13F1F54))(this);
	}
	template <typename R = void> R OnMuteContactClicked() {
		return ((R (*)(ChatContactView*))(Il2CppBase() + 0x13F1FB8))(this);
	}
	template <typename R = void> R OnUnmuteContactClicked() {
		return ((R (*)(ChatContactView*))(Il2CppBase() + 0x13F201C))(this);
	}
	template <typename R = void> R SetUnreadMessagesCount(int32_t count) {
		return ((R (*)(ChatContactView*, int32_t))(Il2CppBase() + 0x13F2080))(this, count);
	}

};

