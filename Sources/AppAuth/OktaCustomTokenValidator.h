/*
 * Copyright (c) 2017-Present, Okta, Inc. and/or its affiliates. All rights reserved.
 * The Okta software accompanied by this notice is provided pursuant to the Apache License, Version 2.0 (the "License.")
 *
 * You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0.
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *
 * See the License for the specific language governing permissions and limitations under the License.
 */


#import <Foundation/Foundation.h>

/*! @brief Allows to custom logic/time source to verify a tokens issueAt/expiry time.
    @discussion More information could be found here: https://github.com/okta/okta-oidc-ios/blob/master/README.md#TODO.
 */
@protocol OktaCustomTokenValidator <NSObject>

/*! @brief Check issueAt time using custom logic/time source.
    @param issuedAt Tokens issueAt Date.
    @return bool of result.
*/
- (bool)isIssueAtValid: (nullable NSDate*)issuedAt;

/*! @brief Check expiry time using custom logic/time source.
    @param expiry Tokens expiry Date.
*/
- (bool)isExpired: (nullable NSDate*)expiry;

@end