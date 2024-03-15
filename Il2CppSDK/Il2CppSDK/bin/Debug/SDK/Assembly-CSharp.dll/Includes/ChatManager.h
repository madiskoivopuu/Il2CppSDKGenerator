#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatManager"));
	}

	template <typename R = uintptr_t> R& _rClient() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _client() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _mucManager() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _rosterManager() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _presenceManager() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& _isConnected() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ICommonLogger*> static R& _logger() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = AppController*> R& _appController() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Il2CppDictionary<Il2CppString*, ChatRoom*>*& _connectedRooms() {
		return *(Il2CppDictionary<Il2CppString*, ChatRoom*>**)((uintptr_t)this + 0x50);
	}
	 Queue1<ChatRoom*>*& _roomsToEnter() {
		return *(Queue1<ChatRoom*>**)((uintptr_t)this + 0x58);
	}
	 Queue1<ChatRoom*>*& _roomsToExit() {
		return *(Queue1<ChatRoom*>**)((uintptr_t)this + 0x60);
	}
	 static Queue1<uintptr_t>*& _toExecuteInMainThread() {
		return *(Queue1<uintptr_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 Il2CppList<uintptr_t>*& _buffer() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x68);
	}

	 Il2CppDictionary<Il2CppString*, ChatRoom*>* get_ConnectedRooms() {
		return ((Il2CppDictionary<Il2CppString*, ChatRoom*>* (*)(ChatManager*))(Il2CppBase() + 0x13F9E18))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ChatManager*))(Il2CppBase() + 0x13F9E20))(this);
	}
	template <typename R = void> R Init(AppController* appContorller, ICommonLogger* logger) {
		return ((R (*)(ChatManager*, AppController*, ICommonLogger*))(Il2CppBase() + 0x13F9E94))(this, appContorller, logger);
	}
	template <typename R = void> R OnUpdate(float deltaTime) {
		return ((R (*)(ChatManager*, float))(Il2CppBase() + 0x13F9F20))(this, deltaTime);
	}
	template <typename R = void> static R ExecuteInMainThread(uintptr_t toInvoke) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x13FAFAC))(0, toInvoke);
	}
	template <typename R = void> R Connect() {
		return ((R (*)(ChatManager*))(Il2CppBase() + 0x13FB18C))(this);
	}
	template <typename R = void> R Login() {
		return ((R (*)(ChatManager*))(Il2CppBase() + 0x13FB564))(this);
	}
	template <typename R = void> R client_OnAuthError(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FC7B0))(this, sender, e);
	}
	template <typename R = void> R client_OnError(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FCC20))(this, sender, e);
	}
	template <typename R = void> R client_OnBind(Il2CppObject* sender, uintptr_t jidEvent) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FCE08))(this, sender, jidEvent);
	}
	template <typename R = void> R client_OnSendXml(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FCE68))(this, sender, e);
	}
	template <typename R = void> R client_OnReceiveXml(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FCEE0))(this, sender, e);
	}
	template <typename R = void> R client_OnPresence(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FCF58))(this, sender, e);
	}
	template <typename R = void> R client_OnMessage(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FD20C))(this, sender, e);
	}
	template <typename R = void> R client_OnIq(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FD784))(this, sender, e);
	}
	template <typename R = void> R client_OnRosterStart(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FD7E4))(this, sender, e);
	}
	template <typename R = void> R client_OnRosterItem(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FD828))(this, sender, e);
	}
	template <typename R = void> R client_OnRosterEnd(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FDBC0))(this, sender, e);
	}
	template <typename R = void> R client_OnLogin(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE144))(this, sender, e);
	}
	template <typename R = void> R client_OnClose(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE188))(this, sender, e);
	}
	template <typename R = void> R client_OnBeforeSasl(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE1E8))(this, sender, e);
	}
	template <typename R = void> R presence_OnSubscribe(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE248))(this, sender, args);
	}
	template <typename R = void> R Register() {
		return ((R (*)(ChatManager*))(Il2CppBase() + 0x13FC104))(this);
	}
	template <typename R = void> R rClient_OnRegisterInformation(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE360))(this, sender, e);
	}
	template <typename R = void> R rClient_OnRegister(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE474))(this, sender, e);
	}
	template <typename R = void> R rClient_OnRegisterError(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE5C4))(this, sender, e);
	}
	template <typename R = void> R EnterRoom(ChatRoom* room) {
		return ((R (*)(ChatManager*, ChatRoom*))(Il2CppBase() + 0x13FA8F4))(this, room);
	}
	template <typename R = void> R ExitRoom(ChatRoom* room) {
		return ((R (*)(ChatManager*, ChatRoom*))(Il2CppBase() + 0x13FA2B8))(this, room);
	}
	template <typename R = void> R SendRoomMessage(Il2CppString* message, ChatRoom* room, int64_t playerId, Il2CppString* playerName) {
		return ((R (*)(ChatManager*, Il2CppString*, ChatRoom*, int64_t, Il2CppString*))(Il2CppBase() + 0x13FE8CC))(this, message, room, playerId, playerName);
	}
	template <typename R = void> R SendChatMessage(Il2CppString* message, ChatRoom* room, Il2CppString* to, Il2CppString* from, int64_t playerId, Il2CppString* playerName) {
		return ((R (*)(ChatManager*, Il2CppString*, ChatRoom*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*))(Il2CppBase() + 0x13FF108))(this, message, room, to, from, playerId, playerName);
	}
	template <typename R = void> R Close() {
		return ((R (*)(ChatManager*))(Il2CppBase() + 0x13FC87C))(this);
	}
	template <typename R = void> R AddContact(Il2CppString* jid, Il2CppString* playerName, Il2CppArray<Il2CppString*>* groups) {
		return ((R (*)(ChatManager*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1400038))(this, jid, playerName, groups);
	}
	template <typename R = void> R UpdateContact(Il2CppString* jid, Il2CppString* playerName, Il2CppArray<Il2CppString*>* groups) {
		return ((R (*)(ChatManager*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1400588))(this, jid, playerName, groups);
	}
	template <typename R = void> R RemoveContact(Il2CppString* jid) {
		return ((R (*)(ChatManager*, Il2CppString*))(Il2CppBase() + 0x1400A74))(this, jid);
	}
	template <typename R = void> R RecoverChatHistory(Il2CppString* jid) {
		return ((R (*)(ChatManager*, Il2CppString*))(Il2CppBase() + 0x13FDCC4))(this, jid);
	}
	template <typename R = void> R StoreMessages(Il2CppString* jid) {
		return ((R (*)(ChatManager*, Il2CppString*))(Il2CppBase() + 0x13FFA70))(this, jid);
	}
	template <typename R = void> R Log(Il2CppString* message) {
		return ((R (*)(ChatManager*, Il2CppString*))(Il2CppBase() + 0x13FB4E0))(this, message);
	}
	template <typename R = void> R Loginb__20_0(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401168))(this, sender, args);
	}
	template <typename R = void> R Loginb__20_1(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x140127C))(this, sender, args);
	}
	template <typename R = void> R Loginb__20_2(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401390))(this, sender, args);
	}
	template <typename R = void> R Loginb__20_3(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x14014A4))(this, sender, args);
	}
	template <typename R = void> R Loginb__20_4(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x14015B8))(this, sender, args);
	}
	template <typename R = void> R Loginb__20_5(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x14016CC))(this, sender, args);
	}
	template <typename R = void> R Loginb__20_6(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x14017E0))(this, sender, args);
	}
	template <typename R = void> R Loginb__20_7(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x14018F4))(this, sender, args);
	}
	template <typename R = void> R Loginb__20_8(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401A08))(this, sender, args);
	}
	template <typename R = void> R Loginb__20_9(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401B1C))(this, sender, args);
	}
	template <typename R = void> R Loginb__20_10(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401C30))(this, sender, args);
	}
	template <typename R = void> R Registerb__36_0(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401D44))(this, sender, args);
	}
	template <typename R = void> R Registerb__36_1(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401E58))(this, sender, args);
	}
	template <typename R = void> R Registerb__36_3(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401F6C))(this, sender, args);
	}
	template <typename R = void> R Registerb__36_4(Il2CppObject* sender, uintptr_t args) {
		return ((R (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401FCC))(this, sender, args);
	}

};

